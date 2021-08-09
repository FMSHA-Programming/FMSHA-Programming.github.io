# FMSHA-Programming.github.io

## How-to this site was created

1. Init repository:

```bash
mkdir FMSHA-Programming.github.io
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:FMSHA-Programming/FMSHA-Programming.github.io.git
git push -u origin main
```

2. Install Ruby and Jekyll

```bash
$ sudo snap install ruby --classic
sudo apt install ruby-full build-essential zlib1g-dev libffi7
echo '# Install Ruby Gems to ~/gems' >> ~/.bashrc
echo 'export GEM_HOME="$HOME/gems"' >> ~/.bashrc
echo 'export PATH="$HOME/gems/bin:$PATH"' >> ~/.bashrc
source ~/.bashrc
gem install jekyll bundler
```

3. Switch to new branch and init the website

```bash
git checkout --orphan gh-pages
jekyll new . --force
```

4. In file `Gemfile`:
   * Comment the line
   ```bash
   # gem "jekyll", "~> 4.2.0"
   ```
   * Insert the line (replace corresponding commented line)
   ```bash
    gem "github-pages", "~> 217", group: :jekyll_plugins
   ```
   where `217` is the supported version listed on [this page](https://pages.github.com/versions/).

   Delete the file `Gemfile.lock` and run

   ```bash
   bundle update
   ```
5. Update info in `_config.yml`: title, email, description etc.
6. Commit and push the changes

```bash
git add .
git commit -m 'Initial GitHub pages site with Jekyll'
git push --set-upstream origin gh-pages
```
