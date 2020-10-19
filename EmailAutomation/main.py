import getpass                                                                                             
import smtplib                                                                        

def automationEmail(x,m,n,t)
    HOST = “smtp.gmail.com”                                                                                     
    PORT = 465
    username = x                                                                             
    password = getpass.getpass(“Provide Gmail password: “)
    Provide Gmail password:
    server = smtplib.SMTP_SSL(HOST, PORT)

    server.login(username, password)                               

    server.sendmail(m,n,t)
    server.quit()
x="user email"
m=“from@domain.com”
n=“to@domain.com”
t=“An email from Python!”

automationEmail(x,m,n,t)
