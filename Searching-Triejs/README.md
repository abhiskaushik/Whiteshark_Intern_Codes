**Installation:**

1.Clone the repo<br>
2.Install node by apt-get install node.<br>
3.Open terminal and run "node prefix1.js"<br>
4.Open localhost:8092<br>

**What does triejs do ??**
trie is a data structure which unlike BT, stores dynamic set or associative array.<br>
Keys in tri are generally a string.

**Instantiating trie in javascript**
var tri=require('triejs');<br>
var trie= new tri();

**Adding values:**
trie.add('github'); <br>
trie.find('git') will hence return github, all other words whose prefix is git..!!<br>

**Read Trie doc here:**
http://en.wikipedia.org/wiki/Trie<br>
https://github.com/pthurlow/triejs

