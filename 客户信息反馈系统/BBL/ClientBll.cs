using DAL;
using Model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BLL
{


    public enum LoginState
    {
        /// <summary>
        /// 用户名不存在
        /// </summary>
        NoName,
        /// <summary>
        /// 密码错误
        /// </summary>
        PwdErr,
        /// <summary>
        /// 登录成功
        /// </summary>
        OK

    }






    public class ClientBll
    {
         ClientDal dal = new ClientDal();
        public LoginState CheckLogin(string phone, string pwd)//登录判断
        {
           ClientDal dal = new ClientDal();
           Client client = dal.SelectClientInfo(phone);
            if (client == null)
                return LoginState.NoName;
            else
            {
                if (client.Pwd != pwd)
                    return LoginState.PwdErr;
                else
                {
                    return LoginState.OK;
                }
            }
        }
        
        public Client SelectClient(string phone)//根据手机号查询该用户的所有信息
        {
            return dal.SelectClientInfo(phone);
        }
        public Client SelectClient2(int id)//根据id查询该用户的所有信息
        {
            return dal.SelectClientInfo2(id);
        }
        public bool AddClient(Client client)//新用户注册
        {
            return dal.AddClient(client) > 0;
        }
        public bool SelectPhoneCount(string phone)//判断该手机号是否存在
        {
            return dal.SelectPhoneCount(phone) > 0;
        }
        public bool Update(Client client,string phone)//用户修改信息
        {
            return dal.Update(client,phone) > 0;
        }

        public bool adminUpdate(Client client, int id)//管理员修改用户信息
        {
            return dal.adminUpdate(client, id) > 0;
        }

        public bool AdminDelete(int id)//管理员根据ID删除
        {
            return dal.AdminDelete(id) > 0;
        }

        public bool UpdatePwd(string newPwd, string phone)//用户修改密码
        {
            return dal.UpdatePwd(newPwd, phone) > 0;
        }

        public List<Client> GetAll()//根据评价读取数据库中的数据
        {
            return dal.GetAll().Count > 0 ? dal.GetAll() : null;
        }
    }
}
