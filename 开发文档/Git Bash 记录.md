```bash
WWC@Surface MINGW64 /c/WINDOWS/System32
$ cd C:\Github\Encryption
bash: cd: C:GithubEncryption: No such file or directory

WWC@Surface MINGW64 /c/WINDOWS/System32
$ cd c:/github/encryption

WWC@Surface MINGW64 /c/github/encryption (master)
$ git remote -v

WWC@Surface MINGW64 /c/github/encryption (master)
$ git remote add github git@github.com:BitBitcode/Encryption.git

WWC@Surface MINGW64 /c/github/encryption (master)
$ git push github master
The authenticity of host 'github.com (13.250.177.223)' can't be established.
RSA key fingerprint is SHA256:nThbg6kXUpJWGl7E1IGOCspRomTxdCARLviKw6E5SY8.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added 'github.com,13.250.177.223' (RSA) to the list of known hosts.
git@github.com: Permission denied (publickey).
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.

WWC@Surface MINGW64 /c/github/encryption (master)
$ git push github master
Enumerating objects: 19, done.
Counting objects: 100% (19/19), done.
Delta compression using up to 8 threads
Compressing objects: 100% (19/19), done.
Writing objects: 100% (19/19), 7.30 KiB | 2.43 MiB/s, done.
Total 19 (delta 5), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (5/5), done.
To github.com:BitBitcode/Encryption.git
 * [new branch]      master -> master

WWC@Surface MINGW64 /c/github/encryption (master)
$ git remote -v
github  git@github.com:BitBitcode/Encryption.git (fetch)
github  git@github.com:BitBitcode/Encryption.git (push)

WWC@Surface MINGW64 /c/github/encryption (master)
$ git remote add gitee git@gitee.com:Acrylic-Studio/Encryption.git
WWC@Surface MINGW64 /c/github/encryption (master)
$ git remote -v
gitee   git@gitee.com:Acrylic-Studio/Encryption.git (fetch)
gitee   git@gitee.com:Acrylic-Studio/Encryption.git (push)
github  git@github.com:BitBitcode/Encryption.git (fetch)
github  git@github.com:BitBitcode/Encryption.git (push)

WWC@Surface MINGW64 /c/github/encryption (master)
$ git pull gitee master
remote: Enumerating objects: 4, done.
remote: Counting objects: 100% (4/4), done.
remote: Compressing objects: 100% (3/3), done.
remote: Total 3 (delta 1), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (3/3), 1.03 KiB | 66.00 KiB/s, done.
From gitee.com:Acrylic-Studio/Encryption
 * branch            master     -> FETCH_HEAD
 * [new branch]      master     -> gitee/master
Updating 6ac4964..8db30bf
Fast-forward
 README.md | 39 +++++++++++++++++++++++++++++++++++++++
 1 file changed, 39 insertions(+)
 create mode 100644 README.md

WWC@Surface MINGW64 /c/github/encryption (master)
$ git push github master
Warning: Permanently added the RSA host key for IP address '13.229.188.59' to the list of known hosts.
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 1.05 KiB | 1.05 MiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:BitBitcode/Encryption.git
   6ac4964..8db30bf  master -> master

WWC@Surface MINGW64 /c/github/encryption (master)
$
```