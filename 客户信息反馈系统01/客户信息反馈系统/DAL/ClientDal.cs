using Model;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DAL
{
    public class ClientDal
    {
        public int AddClient(Client client)//用户注册
        {
            int result = 0;
            SqlHelper sqlHelper = new SqlHelper();
            string sql = "insert into Client values(@Phone,@Pwd,@Name,@Sex,@Age)";
            SqlParameter[] spms ={
                                   new SqlParameter("@Phone",client.Phone),
                                   new SqlParameter("@Pwd",client.Pwd),
                                   new SqlParameter("@Name",client.Name),
                                   new SqlParameter("@Sex",client.Sex),
                                   new SqlParameter("@Age",client.Age),
                                   
                                    
                               };
            result = sqlHelper.ExcuteNoneQuery(sql, spms);
            return result;
        }
        public int SelectPhoneCount(string phone)//查询该手机号是否存在
        {
            SqlHelper sqlHelper = new SqlHelper();
            int result = 0;
            string sql = "select count(*) from Client where Phone=@phone";
            SqlParameter[] spms ={
                                  new SqlParameter("@phone",phone)
                              };
            result = Convert.ToInt32(sqlHelper.ExecuteScalar(sql, spms));
            return result;
        }

        public Client SelectClientInfo(string phone)//根据手机号获取该用户的所有信息
        {
           Client client = null;
            string sql = "select * from Client where Phone=@Phone";
            SqlParameter spm = new SqlParameter("@Phone", phone);
            SqlHelper sqlHelper = new SqlHelper();
            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql, spm))
            {
                if (sdr.Read())
                {
                    client = new Client();
                    client.ID = sdr.GetInt32(0);
                    client.Phone = sdr.GetString(1);
                    
                    client.Pwd = sdr.GetString(2);
                    client.Name = sdr.GetString(3);
                    client.Sex = sdr.GetString(4);
                    client.Age = sdr.GetByte(5);
                }
            }
            return client;

        }

        public Client SelectClientInfo2(int id)//根据ID获取该客户的所有信息
        {
            Client client = null;
            string sql = "select * from Client where ID=@id";
            SqlParameter spm = new SqlParameter("@id", id);
            SqlHelper sqlHelper = new SqlHelper();
            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql, spm))
            {
                if (sdr.Read())
                {
                    client = new Client();
                    client.ID = sdr.GetInt32(0);
                    client.Phone = sdr.GetString(1);

                    client.Pwd = sdr.GetString(2);
                    client.Name = sdr.GetString(3);
                    client.Sex = sdr.GetString(4);
                    client.Age = sdr.GetByte(5);
                }
            }
            return client;

        }
        public int Update(Client client,String phone)//用户修改信息
        {
           
            string sql = "update Client set Phone=@Phone,Name=@Name,Sex=@Sex,Age=@Age where Phone="+phone;
            //sql参数数组
            SqlParameter[] paras = new SqlParameter[]{
            //new SqlParameter("@ID",client.ID),
            new SqlParameter("@Phone",client.Phone),
            new SqlParameter("@Name",client.Name),
            new SqlParameter("@Sex",client.Sex),
            new SqlParameter("@Age",client.Age==null?DBNull.Value:(object)client.Age),
           
        };
            SqlHelper sqlHelper = new SqlHelper();
   
           
            return sqlHelper.ExcuteNoneQuery(sql, paras);
        }


        public int adminUpdate(Client client,int id)//管理员修改用户信息
        {

            string sql = "update Client set Phone=@Phone,Pwd=@Pwd,Name=@Name,Sex=@Sex,Age=@Age where ID=" + id;
            //sql参数数组
            SqlParameter[] paras = new SqlParameter[]{
            //new SqlParameter("@ID",client.ID),
            new SqlParameter("@Phone",client.Phone),
            new SqlParameter("@Pwd",client.Pwd),
            new SqlParameter("@Name",client.Name),
            new SqlParameter("@Sex",client.Sex),
            new SqlParameter("@Age",client.Age==null?DBNull.Value:(object)client.Age),

        };
            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql, paras);
        }

        public int AdminDelete(int id)//管理员根据id删除对应行
        {

            string sql = "delete from Client where ID=" + id;
            //sql参数数组

            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql);
        }

        public int UpdatePwd(string newPwd, String phone)//用户修改密码
        {

            string sql = "update Client set Pwd=@Pwd where Phone=" + phone;
            //sql参数数组
            SqlParameter[] paras = new SqlParameter[]{
           new SqlParameter("@Pwd",newPwd)
            
        };
            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql, paras);
        }


        public List<Client> GetAll()//获取所有用户信息
        {
            List<Client> clientList = new List<Client>();

            string sql = "SELECT * from Client";




            SqlHelper sqlHelper = new SqlHelper();

            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
            {
                if (sdr.HasRows)
                {
                    while (sdr.Read())
                    {

                        Client client = new Client();
                        client.ID = sdr.GetInt32(0);
                        client.Phone = sdr.GetString(1);
                        client.Pwd = sdr.GetString(2);
                        client.Name = sdr.GetString(3);
                        client.Sex = sdr.GetString(4);
                        client.Age = sdr.GetByte(5);
                       
                        clientList.Add(client);
                    }
                }
            }
            return clientList;



        }




    }
}
