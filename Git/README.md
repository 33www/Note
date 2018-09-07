
git 分布式版本控制系统

git config --global user.name "Your Name"

git config --global user.email "email@example.com"

git init 新建仓库


git add 将文件添加到本地库，暂存区

git add . 添加全部文件


git commit 更新到本地库

git commit -m "" 更新说明


git push 更新到远程库


git status 查看当前库的状态 查看add之后未提交的文件

git diff 查看本地库修改内容

git log 查看日志

git reset 回滚

git rm 删除文件，如果要删掉库里的文件，必须使用git rm

git checkout 从本地库里检出，如果暂存区文件被删掉，可以checkout回滚


github 是一个静止的远程仓库，中转站

.ssh加密

ssh-keygen -t rsa 生成ssh 在user/.SSH下有两个文件，id_rsa是私钥，id_rsa.pub是公钥。然后在远程仓库(gitlab/github)添加自己的ssh公钥即可

.gitignore 忽略规则，配置不需要提交的文件
