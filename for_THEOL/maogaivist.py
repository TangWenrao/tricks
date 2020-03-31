# 该程序实现刷CSDN网页访问量，当访问被拒绝或者遇到其他异常时会自动重启，无限刷
# 经过测试发现大概间隔70秒访问一下，访问量才会增加1
# 只需要修改或者添加url的链接就可以了
import requests
import time
 
url = ['https://course-proxy2.buct.edu.cn/meol/jpk/course/layout/newpage/index.jsp?courseId=12927']
 
headers = {'User-Agent':'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.26 Safari/537.36 Core/1.63.5959.400 SLBrowser/10.0.3544.400'}   
 
count = 0
countUrl = len(url)
 
# 访问次数设置
for i in range(1,1000):
        
    if count < 10000:
        try:  # 正常运行
            for i in range(countUrl):
                response = requests.get(url[i], headers=headers)
                if response.status_code == 200:
                    count = count + 1
                    print('Success ' + str(count), 'times')    
            time.sleep(70)

        except Exception:  # 异常
            print('Failed and Retry')
            time.sleep(10)
