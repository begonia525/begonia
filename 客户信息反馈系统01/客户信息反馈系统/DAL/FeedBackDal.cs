using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Model;
using System.Data.SqlClient;

namespace DAL
{
    public class FeedBackDal
    {
        public int AddFeedBack(FeedBack feedBack)//发布反馈
        {
            int result = 0;
            SqlHelper sqlHelper = new SqlHelper();
            string sql = "insert into FeedBack values(@Phone,@Name,@Message,@Evaluate,@Time)";
            SqlParameter[] spms ={
                                   new SqlParameter("@Phone",feedBack.Phone),
                                   new SqlParameter("@Name",feedBack.Name),
                                   new SqlParameter("@Message",feedBack.Message),
                                   new SqlParameter("@Evaluate",feedBack.Evaluate),
                                   new SqlParameter("@Time",feedBack.Time)

                                   
                                    
                               };
            result = sqlHelper.ExcuteNoneQuery(sql, spms);
            return result;
        }

        public List<FeedBack> GetAll(string Phone)//根据手机号搜索
        {
            List<FeedBack> fbList = new List<FeedBack>();
            string sql = "SELECT * from FeedBack where phone="+Phone;
                             
            SqlHelper sqlHelper = new SqlHelper();
           
                using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
                {
                    if (sdr.HasRows)
                    {
                        while (sdr.Read())
                        {


                            FeedBack feedBack = new FeedBack();
                            feedBack.ID = sdr.GetInt32(0);
                            feedBack.Phone = sdr.GetString(1);
                            feedBack.Name = sdr.GetString(2);
                            feedBack.Message = sdr.GetString(3);
                            feedBack.Evaluate = sdr.GetString(4);
                            feedBack.Time = sdr.GetDateTime(5);
                        fbList.Add(feedBack);
                        }
                    }
                }
                return fbList;
           
           
           
        }


        public List<FeedBack> GetAll2()//搜索全部
        {
            List<FeedBack> fbList = new List<FeedBack>();
            string sql = "SELECT * from FeedBack" ;

            SqlHelper sqlHelper = new SqlHelper();

            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
            {
                if (sdr.HasRows)
                {
                    while (sdr.Read())
                    {


                        FeedBack feedBack = new FeedBack();
                        feedBack.ID = sdr.GetInt32(0);
                        feedBack.Phone = sdr.GetString(1);
                        feedBack.Name = sdr.GetString(2);
                        feedBack.Message = sdr.GetString(3);
                        feedBack.Evaluate = sdr.GetString(4);
                        feedBack.Time = sdr.GetDateTime(5);
                        fbList.Add(feedBack);
                    }
                }
            }
            return fbList;



        }
        public List<FeedBack> GetAllEvaluate(string evaluate)//根据评价搜索
        {
            List<FeedBack> fbList = new List<FeedBack>();
           
                string sql = "SELECT * from FeedBack where Evaluate="+"'"+evaluate+"'";




            SqlHelper sqlHelper = new SqlHelper();

            using (SqlDataReader sdr = sqlHelper.ExecuteReader(sql))
            {
                if (sdr.HasRows)
                {
                    while (sdr.Read())
                    {


                        FeedBack feedBack = new FeedBack();
                        feedBack.ID = sdr.GetInt32(0);
                        feedBack.Phone = sdr.GetString(1);
                        feedBack.Name = sdr.GetString(2);
                        feedBack.Message = sdr.GetString(3);
                        feedBack.Evaluate = sdr.GetString(4);
                        feedBack.Time = sdr.GetDateTime(5);
                        fbList.Add(feedBack);
                    }
                }
            }
            return fbList;



        }



        public int SelectPhoneCount(string phone)//判断该手机号是否存在
        {
            SqlHelper sqlHelper = new SqlHelper();
            int result = 0;
            string sql = "select count(*) from FeedBack where Phone=@phone";
            SqlParameter[] spms ={
                                  new SqlParameter("@phone",phone)
                              };
            result = Convert.ToInt32(sqlHelper.ExecuteScalar(sql, spms));
            return result;
        }
        public int SelectEvaluateCount(string evaluate)//判断是否有好评或差评或中评记录
        {
            SqlHelper sqlHelper = new SqlHelper();
            int result = 0;
            string sql = "select count(*) from FeedBack where Evaluate=@evaluate";
            SqlParameter[] spms ={
                                  new SqlParameter("@evaluate",evaluate)
                              };
            result = Convert.ToInt32(sqlHelper.ExecuteScalar(sql, spms));
            return result;
        }


        public int Delete(int id)//根据id删除对应行
        {

            string sql = "delete from FeedBack where ID=" + id;
            //sql参数数组
            
            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql);
        }

        public int Delete2(string phone)//根据手机号删除对应行
        {

            string sql = "delete from FeedBack where Phone=" + "'" + phone + "'";
            //sql参数数组

            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql);
        }


        public int clientUpdate(string name,string phone)//用户修改信息
        {

            string sql = "update FeedBack set Name="+"'"+name+"'"+"where Phone=" + "'"+phone+"'";
       
            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql);
        }

        public int adminUpdate(Client client,string phone2)//用户修改信息
        {

            string sql = "update FeedBack set Phone=@Phone,Name=@Name where Phone=" + "'" + phone2 + "'";
            SqlParameter[] paras = new SqlParameter[]{
           
            new SqlParameter("@Phone",client.Phone),
            new SqlParameter("@Name",client.Name),
            

        };

            SqlHelper sqlHelper = new SqlHelper();


            return sqlHelper.ExcuteNoneQuery(sql,paras);
        }

    }


}
