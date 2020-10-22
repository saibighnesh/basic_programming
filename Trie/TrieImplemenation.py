class Trie:

    def __init__(self):
        self.children = {}
        self.isWord = False

    def insert(self, word):
        """
        Inserts a word into the trie.
        :type word: str (or list internally upon recursion)
        :rtype: None
        """

        if not word:
            return

        head, *tail = word

        if head not in self.children:
            self.children[head] = Trie()

        trie = self.children[head]

        if tail:
            trie.insert(tail)
        else:
            self.isWord = True

    def search(self, word):
        """
        Returns True if the word is in the trie.
        :type word: str (or list internally upon recursion)
        :rtype: bool
        """

        if not word:
            return False

        head, *tail = word

        if head in self.children:
            if not tail and self.isWord:
                return True

            return self.children[head].search(word[1:])

        return False

    def startsWith(self, prefix):
        """
        Returns if there is any word in the trie that starts with the given prefix.
        :type prefix: str (or list internally upon recursion)
        :rtype: bool
        """

        if not prefix:
            return True

        head, *tail = prefix

        if head in self.children:
            return self.children[head].startsWith(tail)

        return False