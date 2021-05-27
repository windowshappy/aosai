import urllib as r

aa = r.request.urlopen("https://www.baidu.com")
print(r.response.read(aa))
