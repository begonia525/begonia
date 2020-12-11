using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DAL;
using Model;

namespace BLL
{
  public  class ReplyBll
    {
        ReplyDal replyDal = new ReplyDal();
        public bool AddReply(Reply reply )//发布反馈
        {
            return replyDal.AddFeedBack(reply) > 0;
        }
        public bool AddReply(int id ,string reply)
        {
            return replyDal.AddReply(id, reply)>0;
        }
        public List<Reply> GetAll(string phone)//根据手机号读取数据库中的数据
        {
            return replyDal.GetAll(phone).Count > 0 ? replyDal.GetAll(phone) : null;
        }

        public List<Reply> GetAll2()//读取数据库中的所有数据
        {
            return replyDal.GetAll2().Count > 0 ? replyDal.GetAll2() : null;
        }

        public bool SelectEvaluateCount(string evaluate)//根据手机号查询返回行数
        {
            return replyDal.SelectEvaluateCount(evaluate) > 0;
        }
        public List<Reply> GetEvaluate(string evaluate)//读取数据库中的数据
        {
           
                return replyDal.GetEvaluate(evaluate).Count > 0 ? replyDal.GetEvaluate(evaluate) : null;
           
        }
        public bool SelectPhoneCount(string phone)//根据手机号查询返回行数
        {
            return replyDal.SelectPhoneCount(phone) > 0;
        }
        public bool Delete(int id)//根据ID删除
        {
            return replyDal.Delete(id) > 0;
        }
        public bool Delete2(string phone)//根据手机号删除
        {
            return replyDal.Delete2(phone) > 0;
        }

        public Reply Select(int id)//根据ID查找
        {
            return replyDal.Select(id) ;
        }

        public bool clientUpdate(string name, string phone)//用户修改信息
        {
            return replyDal.clientUpdate(name, phone) > 0;
        }

        public bool adminUpdate(Client client, string phone2)//管理员修改信息
        {
            return replyDal.adminUpdate(client, phone2) > 0;
        }
    }
}
