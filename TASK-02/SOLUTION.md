THE COORDINATES ARE:-9°5'38.1"N  &  76°29'30.8"E

I had opened a terminal in my Ubuntu run laptop and entered the command"pwd" to find out my current location in the terminal,followed by that I have created a new folder(directory) using "mkdir" command.And named it as North.Then I _have created a new file named NDegree.txt using the command "touch file_ename.txt".In that way I had carried out the process of creation of files and directories.To copy a file i used the "cpy" command followed by source and destination file name.like $ cpy source.txt destination.txt.When it comes to the case of renaming and moving the file I used the command of mv source.txt destination.txt suprisingly this is same for renaming too (as renaming is techinacally overwriting the same file over there).The unnecessary files are then deleted using the rm command like rm filename.txt.


When I have worked through this project I have taken the files and  created  local folder on my computer with the code.I was able to see the path to this project on my computer.Now I'm going to take this  and push this to a repository on GitHub.When i open github i made sure that i had logged and started anuding the repository created .I used
a previously created reopsitory  to push project to my GitHub repository working with the terminal.STEP 2 when I open the terminal I come over the step 3 here I am have setup t my  local project as the current directory.When i had typed PWD this will find and locate the present working directory. this will need to change my directory. I have typed CD and then I'll specify the folder where my project is located.Next I will type lswhich  will list the files that are inside this folder.STEP 4,I InitializeED my local directory as it get's the repository.I type git it  and hit return .STEP 5 I have added the files in my local folder. I am  staging my files for their first commit.I type the command  git add,this will add all of the files inside of that folder.I typed git status and hit return. then i was able to see all the files that I have staged for commit. TO commit the files from local repository i use the command git commit-emend  inside of quotation mark.I first typed commit and then I specified the remote repository URL so that i could come back to our github repository  quick setup page and we copy the URL.In step 8 I added the URL for the remote repository. I have done thi by typing the following "get remote add origin" and I  pasted the URL.I now can push the code into my local repository on GitHub by the following command "get push- you origin master" and then I hit return.Then i was asked to enter my username and password.Once when I have  I've completed all of these steps I can come back to GitHub and I can view my files inside of my repository.

I have successfully pushed my code to GitHub.

These are the following commands used by me in the completion of this task(TASK-02).

create a new directory->    mkdir <directoryname>
  
create a new file->         touch filename.txt
  
to copy file->              cp sourcefilename destinationfilename
  
to rename file->            mv previousname new name
  
to move file->              mv file1 file2
  
to delete file->            rm filename
  
to delete directory->       rmdir <directoryname>
  
  
  GIT COMMANDS USED ARE:-
  
git init -b main
  
gh repo create project-name
  
git pull --set-upstream origin main
  
git add . && git commit -m "initial commit" && git push
  
$ git init -b main
  
$ git push origin main
  
git add . && git commit -m "initial commit" && git push

