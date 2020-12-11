using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;

namespace DAL
{
    public class SqlHelper
    {
        private string conStr = System.Configuration.ConfigurationSettings.AppSettings["con"];
        public object ExecuteScalar(string sql, params SqlParameter[] spms)
        {
            //int count = 0;
            using (SqlConnection con = new SqlConnection(conStr))
            {
                using (SqlCommand cmd = new SqlCommand(sql, con))
                {
                    if (spms != null)
                    {
                        cmd.Parameters.AddRange(spms);

                    }
                    con.Open();
                    //count = cmd.ExecuteNonQuery();
                    return cmd.ExecuteScalar();
                }
            }
            // return count;
        }

        public DataTable ExecuteDatatable(string sql,params SqlParameter[]pms)
        {
            DataTable dt = new DataTable();
            using (SqlDataAdapter adapter =new SqlDataAdapter(sql,conStr))
            {
                if(pms!=null)
                {
                    adapter.SelectCommand.Parameters.AddRange(pms);
                }
                adapter.Fill(dt);
            }
            return dt;
        }

        public int ExcuteNoneQuery(string sql, params SqlParameter[] spms)
        {
            //int count = 0;
            using (SqlConnection con = new SqlConnection(conStr))
            {
                using (SqlCommand cmd = new SqlCommand(sql, con))
                {
                    if (spms != null)
                    {
                        cmd.Parameters.AddRange(spms);
                    }
                    
                    con.Open();

                  

                    return cmd.ExecuteNonQuery();

                   
                }
            }
        


        }
        public SqlDataReader ExecuteReader(string sql, params SqlParameter[] spms)
        {
            SqlConnection con = new SqlConnection(conStr);
            using (SqlCommand cmd = new SqlCommand(sql, con))
            {
                if (spms != null)
                {
                    cmd.Parameters.AddRange(spms);

                }
                try
                {
                    con.Open();
                    return cmd.ExecuteReader(CommandBehavior.CloseConnection);


                }

                catch (Exception)
                {
                    con.Close();
                    con.Dispose();
                  throw;
                }
            }
        }
    }
}