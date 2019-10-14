# How to contribute

I'm really glad you're reading this, because we need friends like you to help us grow and build as newbie developers.

## Steps to Contribute

1. Fork the repository

2. Clone your forked repository using terminal or gitbash.

```
git clone <link-of-repos>
```
3. Make changes to the cloned repos

4. Run the following three commands 

```
git add .
git commit -m "Your-msg-here"
git push origin master
```
5. Then in github , in your cloned repository find the option to make a pull request

<b> Successfully you have created a PR </b> :smiley:

## Rules for making changes to this repository

Choose the programming language you would like to contribute to , find its respective folder and add the code to it. If the folder is not present , then create the folder with the name of the programming language.

## Testing

We have a handful of Cucumber features, but most of our testbed consists of RSpec examples. Please write RSpec examples for new code you create.

## Submitting changes

Please send a [GitHub Pull Request to theekrystallee](https://github.com/theekrystallee/Hacktoberfest2019/pull/new/master) with a clear list of what you've done (read more about [pull requests](https://help.github.com/en/articles/creating-a-pull-request)). When you send a pull request, we will love you forever if you include RSpec examples. We can always use more test coverage. Please follow our coding conventions (below) and make sure all of your commits are atomic (one feature per commit).

Always write a clear log message for your commits. One-line messages are fine for small changes, but bigger changes should look like this:

    $ git commit -m "A brief summary of the commit
    > 
    > A paragraph describing what changed and its impact." 
 
## Coding and commit conventions:

  * We ALWAYS put spaces after list items and method parameters (`[1, 2, 3]`, not `[1,2,3]`), around operators (`x += 1`, not `x+=1`), and around hash arrows.
  * This is open source software. Consider the people who will read your code, and make it look nice for them. It's sort of like driving a car: Perhaps you love doing donuts when you're alone, but with passengers the goal is to make the ride as smooth as possible.
  * So that we can consistently serve images from the CDN, always use image_path or image_tag when referring to images. Never prepend "/images/" when using image_path or image_tag.
  * Also for the CDN, always use cwd-relative paths rather than root-relative paths in image URLs in any CSS. So instead of url('/images/blah.gif'), use url('../images/blah.gif').

Thanks!
