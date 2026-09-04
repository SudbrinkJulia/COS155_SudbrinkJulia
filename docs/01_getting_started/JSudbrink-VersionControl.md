# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## [ COS155 – Version Control & Documentation ]

- **[ Julia Sudbrink ]**
- **[ September 6, 2026 ]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ clear ]: Clear the Screen
- [ pwd ]: Print the "Working Directory"
- [ ls ]: List files and folders
- [ ls -a ]: List files and folders, including invisible files
- [ ls -alh ]: List all files and folders, in human readable form
- [ cd foldername ]: Change directory
- [ cd / ]: Change directory, go to root directory
- [ cd ~ ]: Change directory and go to user home directory
- [ cd .. ]: Change directory, go up one folder level
- [ cd ../.. ]: Change directory, go up two folder levels
- [ cd ~/Desktop ]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

[ When I typed “cd ” and dragged a folder into Terminal, the full file path to that folder appeared automatically. After pressing Return, Terminal changed the working directory to that exact folder. This makes navigation easier because I don’t have to manually type long or complicated folder paths. ]

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

[ 1. Local Version Control  
   All changes are stored on a single computer. Developers keep different versions of files in local directories. This method is simple but risky because everything is stored in one place.

2. Centralized Version Control  
   A single central server stores all project files, and developers check files in and out. This allows collaboration, but if the server goes down, no one can access the project.

3. Distributed Version Control  
   Every developer has a full copy of the repository, including its entire history. Git is a distributed system. This makes it fast, reliable, and safe because work can continue even if the main server is offline.]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.


- [  git clone <repository-url>   ]: Clone a repository
- [ git config --global user.name "Julia Sudbrink" ]: Set-up a global user name
- [ git config --global user.email@example.com" ]: Set-up a global email address (to match my GitHub account email)
- [ CMD ]: Shows the current state of your directory and staging area
- [ git status ]: Add modified files to the next commit
- [ git commit-m "message" ]: Make a commit with a new message
- [ git log ]: Show my commit history
- [ git help ]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[ To connect to GitHub using Terminal with HTTPS, I first copy the HTTPS URL from my GitHub repository. Then I open Terminal and navigate to the folder where I want the project to be stored. I type “git clone” followed by the HTTPS link, and press Return. Git downloads the entire repository into my local machine. 

When I make changes, I use “git add .” to stage the files, “git commit -m” to save the changes with a message, and “git push” to upload the changes back to GitHub. If GitHub asks for authentication, I log in using my GitHub credentials or a personal access token. This completes the connection and allows me to send updates from Terminal to my GitHub repo. ]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  [The purpose is to tell Git which files and folders should not be tracked in the repo. It ensures everything is organized and stored in version control. ]

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  [It is a hidden Mac file that stores folder view settings. It is automatically created and has nothing to do with the project and can cause conflicts. ]

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  [I would add the /bin and /obj folders to my .gitignore file because they contain compiled output files. They are automatically generated every time the project is built, so they do not need to be stored in version control. Ignoring them keeps the repo smaller.]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[ I found the official Git documentation and GitHub Docs most helpful this week because they provide clear explanations, examples, and beginner friendly guidance. The Full Sail course module also helped by breaking down the assignment step‑by‑step.]

**Terminal Commands**  
[https://ubuntu.com/tutorials/command-line-for-beginners#1-overview)

**Three Types of Version Control**  
[https://www.geeksforgeeks.org/version-control-systems/)

**Git Commands**  
[https://git-scm.com/docs)

**Connecting to GitHub using Terminal**  
[https://docs.github.com/en/authentication/connecting-to-github-with-ssh)

**Using .gitignore and Why it's Important**  
[https://docs.github.com/en/get-started/getting-started-with-git/ignoring-files)
