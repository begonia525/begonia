using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DAL;
using Model;

namespace BLL
{
    public class FeedBackBll
    {
        FeedBackDal dal = new FeedBackDal();
        public bool AddFeedBack(FeedBack feedBack)//发布反馈
        {
            return dal.AddFeedBack(feedBack) > 0;
        }

        public List<FeedBack> GetAll(string phone)//根据手机号读取数据库中的数据
        {
            return dal.GetAll(phone).Count > 0 ? dal.GetAll(phone) : null;
        }

        public List<FeedBack> GetAll2()//读取数据库中的全部数据
        {
            return dal.GetAll2().Count > 0 ? dal.GetAll2() : null;
        }
        public List<FeedBack> GetAllEvaluate(string evaluate)//根据评价读取数据库中的数据
        {
            return dal.GetAllEvaluate(evaluate).Count > 0 ? dal.GetAllEvaluate(evaluate) : null;
        }
        public bool SelectPhoneCount(string phone)//根据手机号查询返回行数
        {
            return dal.SelectPhoneCount(phone) > 0;
        }
        public bool SelectEvaluateCount(string evaluate)//根据评价查询返回行数
        {
            return dal.SelectEvaluateCount(evaluate) > 0;
        }

        public bool Delete(int id)//根据ID删除
        {
            return dal.Delete(id) > 0;
        }

        public bool Delete2(string phone)//根据手机号删除
        {
            return dal.Delete2(phone) > 0;
        }


        public bool clientUpdate(string name,string phone)//用户修改信息
        {
            return dal.clientUpdate(name,phone) > 0;
        }

        public bool adminUpdate(Client client,string phone2)//管理员修改信息
        {
            return dal.adminUpdate(client,phone2) > 0;
        }
    }
}
