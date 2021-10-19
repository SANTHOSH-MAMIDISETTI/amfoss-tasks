THE COORDINATES ARE:-9°5'38.1"N  &  76°29'30.8"E

I had opened a terminal in my Ubuntu run laptop and entered the command"pwd" to find out my current location in the terminal followed by that I created a new folder(directory) using "mkdir" command and named it North and created a new file named NDegree.txt using the command "touch file_ename.txt", in that way all the creation of files and directories is carried out,to copy a file i use the "cpy" command followed by source and destination file name.like $ cpy source.txt destination.txt.When it comes to the case of renaming and moving the file I use the command of mv source.txt destination.txt surprisingly this is same for renaming too (as renaming is techinacally overwriting the same file over there.) the unnecessary files are deleted using the rm command like rm filename.txt.


I have worked through this project I have taken the files the  created  local folder on my computer with the code I can see the path to this project on my computer  now I'm going to take this  and push this to a repository, on GitHub open GitHub I make sure that I am all logged in and I begin by creating a new repository I hit the plus sign and select new repository I give my repository a name I will  use an already created repository to push project to my GitHub repository working with the terminal step 2 we open the terminal we come to step 3 here wearer going to set our local project as the current directory we type PWD this will find and locate the present this will need to change my directory I type CD and then I specify the folder where my project is located next I will type ls will list the files that are inside of this folder step 4,I Initialize my local directory as it get repository I type get an it and hit return in step 5 I'm going to add the files in my local folder to like biorepository I am staging my files for their first commit I type git add. this will add all of the files inside of that folder I'm going to type git status and hit return I will now see all of the files that I have staged for commit now let's commit the files from our local repository we type get commit - emend inside of quotation marks I type first commit now we need to specify the remote repository URL so we come back tour GitHub repository quick setup pageant we copy the URL in step 8 we'll add the URL for the remote repository we do this by typing the following get remote add origin and we paste the URL I now can push the code In my local repository to GitHub I type the following get push- you origin master I hit return now I will be asked to enter my username and password once I've completed all of these steps I can come back to GitHub and I can view my files inside of my repository I have successfully pushed our code to GitHub.

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

