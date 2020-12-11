using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Model;
using System.Data.SqlClient;

namespace DAL
{
   public class ReplyDal
    {

        SqlHelper sqlHelper = new SqlHelper();
        public int AddFeedBack(Reply reply)//发布反馈
        {
            int result = 0;
            //SqlHelper sqlHelper = new SqlHelper();
            string sql = "insert into Reply values(@Phone,@Name,@Evaluate,@Message,@Time,@AdReply)";

            SqlParameter[] spms ={
                                   new SqlParameter("@Phone",reply.Phone),
                                   new SqlParameter("@Name",reply.Name),
                                   new SqlParameter("@Evaluate",reply.Evaluate),
                                   new SqlParameter("@Message",reply.Message),
                                   new SqlParameter("@Time",reply.Time),
                                   new SqlParameter("@AdReply",reply.AdReply)



                               };
            result = sqlHelper.ExcuteNoneQuery(sql, spms);
            return result;
        }

        public int AddReply(int id,string reply)//管理员回复
        {
            int result = 0;
            string sql = "UPDATE REply SET AdReply =@Reply WHERE ID =" + id;
            SqlParameter spms = new SqlParameter("@Reply", reply);
            result = sqlHelper.ExcuteNoneQuery(sql, spms);
            return result;

        }
        public List<Reply> GetAll(string Phone)//根据手机号搜索
        {
            List<Reply> reList = new List<Reply>();
            string sql = "SELECT * from Reply where phone=" + Phone;

            //SqlHelper sqlHelper = new SqlHelper();

            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
            {
                if (sdr.HasRows)
                {
                    while (sdr.Read())
                    { 
                        Reply reply = new Reply();
                        reply.ID = sdr.GetInt32(0);
                        reply.Phone = sdr.GetString(1);
                        reply.Name = sdr.GetString(2);
                        reply.Evaluate = sdr.GetString(3);
                        reply.Message = sdr.GetString(4);
                        reply.Time = sdr.GetDateTime(5);
                        reply.AdReply = sdr.GetString(6);
                        reList.Add(reply);
                    }
                }
            }
            return reList;



        }

        public List<Reply> GetEvaluate(string evaluate)//根据评价查询
        {
            List<Reply> reList = new List<Reply>();
            string sql = "SELECT * from Reply where Evaluate="+"'"+evaluate+"'";

            //SqlHelper sqlHelper = new SqlHelper();

            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
            {
                if (sdr.HasRows)
                {
                    while (sdr.Read())
                    {
                        Reply reply = new Reply();
                        reply.ID = sdr.GetInt32(0);
                        reply.Phone = sdr.GetString(1);
                        reply.Name = sdr.GetString(2);
                        reply.Evaluate = sdr.GetString(3);
                        reply.Message = sdr.GetString(4);
                        reply.Time = sdr.GetDateTime(5);
                        reply.AdReply = sdr.GetString(6);
                        reList.Add(reply);
                    }
                }
            }
            return reList;



        }


        public int SelectEvaluateCount(string evaluate)//判断是否有相应的评价记录，例如：判断有没有好评记录
        {
            
            int result = 0;
            string sql = "select count(*) from Reply where Evaluate=@evaluate";
            SqlParameter[] spms ={
                                  new SqlParameter("@evaluate",evaluate)
                              };
            result = Convert.ToInt32(sqlHelper.ExecuteScalar(sql, spms));
            return result;
        }

        public List<Reply> GetAll2()//查询表中所有数据
        {
            List<Reply> reList = new List<Reply>();
            string sql = "SELECT * from Reply ";

           
            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
            {
                if (sdr.HasRows)
                {
                    while (sdr.Read())
                    {
                        Reply reply = new Reply();
                        reply.ID = sdr.GetInt32(0);
                        reply.Phone = sdr.GetString(1);
                        reply.Name = sdr.GetString(2);
                        reply.Evaluate = sdr.GetString(3);
                        reply.Message = sdr.GetString(4);
                        reply.Time = sdr.GetDateTime(5);
                        reply.AdReply = sdr.GetString(6);
                        reList.Add(reply);
                    }
                }
            }
            return reList;



        }

        public int SelectPhoneCount(string phone)//查询该手机号是否存在
        {
           
            int result = 0;
            string sql = "select count(*) from Reply where Phone=@phone";
            SqlParameter[] spms ={
                                  new SqlParameter("@phone",phone)
                              };
            result = Convert.ToInt32(sqlHelper.ExecuteScalar(sql, spms));
            return result;
        }

        public int Delete(int id)//根据id删除对应行
        {

            string sql = "delete from Reply where ID=" + id;
            //sql参数数组

            //SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql);
        }

        public int Delete2(string phone)//根据手机号删除对应行
        {

            string sql = "delete from Reply where Phone=" + "'"+phone+"'";
            //sql参数数组

            //SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql);
        }
        public Reply Select(int id)//根据id查找对应行
        {

            string sql = "select * from Reply where ID=" + id;
            //sql参数数组

          
            Reply reply = new Reply();
            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
            {
                if (sdr.HasRows)
                {
                    while (sdr.Read())
                    {

                        reply.ID = sdr.GetInt32(0);
                        reply.Phone = sdr.GetString(1);
                        reply.Name = sdr.GetString(2);
                        reply.Evaluate = sdr.GetString(3);
                        reply.Message = sdr.GetString(4);
                        reply.Time = sdr.GetDateTime(5);
                        reply.AdReply = sdr.GetString(6);

                    }
                }


                return reply;
            }

        }

        public int clientUpdate(string name, string phone)//用户修改信息
        {

            string sql = "update Reply set Name=" + "'" + name + "'" + "where Phone=" + "'" + phone + "'";

            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql);
        }

        public int adminUpdate(Client client, string phone2)//用户修改信息
        {

            string sql = "update Reply set Phone=@Phone,Name=@Name where Phone=" + "'" + phone2 + "'";
            SqlParameter[] paras = new SqlParameter[]{

            new SqlParameter("@Phone",client.Phone),
            new SqlParameter("@Name",client.Name),


        };

            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql, paras);
        }

    }
}
