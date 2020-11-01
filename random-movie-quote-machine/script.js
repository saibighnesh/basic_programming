const quotes = [
    {
      "quote": "Frankly, my dear, I don't give a damn.",
      "movie": "GONE WITH THE WIND (1940)"
    },
    {
      "quote": "I'm gonna make him an offer he can't refuse.",
      "movie": "THE GODFATHER (1972)"
    },
    {
      "quote": "You don't understand! I coulda had class. I coulda been a contender. I could've been somebody, instead of a bum, which is what I am.",
      "movie": "ON THE WATERFRONT (1954)"
    },
    {
      "quote": "Toto, I've a feeling we're not in Kansas anymore.",
      "movie": "THE WIZARD OF OZ (1939)"
    },
    {
      "quote": "Here's looking at you, kid.",
      "movie": "CASABLANCA (1943)"
    },
    {
      "quote": "Go ahead, make my day.",
      "movie": "SUDDEN IMPACT (1983)"
    },
    {
      "quote": "All right, Mr. DeMille, I'm ready for my close-up.",
      "movie": "SUNSET BLVD. (1950)"
    },
    {
      "quote": "May the Force be with you.",
      "movie": "STAR WARS (1977)"
    },
    {
      "quote": "Fasten your seatbelts. It's going to be a bumpy night.",
      "movie": "ALL ABOUT EVE (1950)"
    },
    {
      "quote": "You talking to me?",
      "movie": "TAXI DRIVER (1976)"
    },
    {
      "quote": "What we've got here is failure to communicate.",
      "movie": "COOL HAND LUKE (1967)"
    },
    {
      "quote": "I love the smell of napalm in the morning.",
      "movie": "APOCALYPSE NOW (1979)"
    },
    {
      "quote": "Love means never having to say you're sorry.",
      "movie": "LOVE STORY (1970)"
    },
    {
      "quote": "The stuff that dreams are made of.",
      "movie": "THE MALTESE FALCON (1941)"
    },
    {
      "quote": "E.T. phone home.",
      "movie": "E.T.: THE EXTRA-TERRESTRIAL (1982)"
    },
    {
      "quote": "They call me Mister Tibbs!",
      "movie": "IN THE HEAT OF THE NIGHT (1967)"
    },
    {
      "quote": "Rosebud.",
      "movie": "CITIZEN KANE (1941)"
    },
    {
      "quote": "Made it, Ma! Top of the world!",
      "movie": "WHITE HEAT (1949)"
    },
    {
      "quote": "I'm as mad as hell, and I'm not going to take this anymore!",
      "movie": "NETWORK (1976)"
    },
    {
      "quote": "Louis, I think this is the beginning of a beautiful friendship.",
      "movie": "CASABLANCA (1943)"
    },
    {
      "quote": "A census taker once tried to test me. I ate his liver with some fava beans and a nice Chianti.",
      "movie": "THE SILENCE OF THE LAMBS (1991)"
    },
    {
      "quote": "Bond. James Bond.",
      "movie": "DR. NO (1963)"
    },
    {
      "quote": "There's no place like home.",
      "movie": "THE WIZARD OF OZ (1939)"
    },
    {
      "quote": "I am big! It's the pictures that got small.",
      "movie": "SUNSET BLVD. (1950)"
    },
    {
      "quote": "Show me the money!",
      "movie": "JERRY MAGUIRE (1996)"
    },
    {
      "quote": "Why don't you come up sometime and see me?",
      "movie": "SHE DONE HIM WRONG (1933)"
    },
    {
      "quote": "I'm walking here! I'm walking here!",
      "movie": "MIDNIGHT COWBOY (1969)"
    },
    {
      "quote": "Play it, Sam. Play 'As Time goes By.'",
      "movie": "CASABLANCA (1943)"
    },
    {
      "quote": "You can't handle the truth!",
      "movie": "A FEW GOOD MEN (1992)"
    },
    {
      "quote": "I want to be alone.",
      "movie": "GRAND HOTEL (1932)"
    },
    {
      "quote": "After all, tomorrow is another day!",
      "movie": "GONE WITH THE WIND (1940)"
    },
    {
      "quote": "Round up the usual suspects.",
      "movie": "CASABLANCA (1943)"
    },
    {
      "quote": "I'll have what she's having.",
      "movie": "WHEN HARRY MET SALLY... (1989)"
    },
    {
      "quote": "You know how to whistle, don't you, Steve? You just put your lips together and blow.",
      "movie": "TO HAVE AND HAVE NOT (1945)"
    },
    {
      "quote": "You're gonna need a bigger boat.",
      "movie": "JAWS (1975)"
    },
    {
      "quote": "Badges? We ain't got no badges! We don't need no badges! I don't have to show you any stinking badges!",
      "movie": "THE TREASURE OF THE SIERRA MADRE (1948)"
    },
    {
      "quote": "I'll be back.",
      "movie": "THE TERMINATOR (1984)"
    },
    {
      "quote": "Today, I consider myself the luckiest man on the face of the earth.",
      "movie": "THE PRIDE OF THE YANKEES (1943)"
    },
    {
      "quote": "If you build it, he will come.",
      "movie": "FIELD OF DREAMS (1989)"
    },
    {
      "quote": "My mama always said life was like a box of chocolates. You never know what you're gonna get.",
      "movie": "FORREST GUMP (1994)"
    },
    {
      "quote": "We rob banks.",
      "movie": "BONNIE AND CLYDE (1967)"
    },
    {
      "quote": "Plastics.",
      "movie": "THE GRADUATE (1967)"
    },
    {
      "quote": "We'll always have Paris.",
      "movie": "CASABLANCA (1943)"
    },
    {
      "quote": "I see dead people.",
      "movie": "THE SIXTH SENSE (1999)"
    },
    {
      "quote": "Stella! Hey, Stella!",
      "movie": "A STREETCAR NAMED DESIRE (1952)"
    },
    {
      "quote": "Oh, Jerry, don't let's ask for the moon. We have the stars.",
      "movie": "NOW, VOYAGER (1942)"
    },
    {
      "quote": "Shane. Shane. Come back!",
      "movie": "SHANE (1953)"
    },
    {
      "quote": "Well, nobody's perfect.",
      "movie": "SOME LIKE IT HOT (1959)"
    },
    {
      "quote": "It's alive! It's alive!",
      "movie": "FRANKENSTEIN (1931)"
    },
    {
      "quote": "Houston, we have a problem.",
      "movie": "APOLLO 13 (1995)"
    },
    {
      "quote": "You've got to ask yourself one question: 'Do I feel lucky?' Well, do ya, punk?",
      "movie": "DIRTY HARRY (1971)"
    },
    {
      "quote": "You had me at \"hello.\"",
      "movie": "JERRY MAGUIRE (1996)"
    },
    {
      "quote": "One morning I shot an elephant in my pajamas. How he got in my pajamas, I don't know.",
      "movie": "ANIMAL CRACKERS (1930)"
    },
    {
      "quote": "There's no crying in baseball!",
      "movie": "A LEAGUE OF THEIR OWN (1992)"
    },
    {
      "quote": "La-dee-da, la-dee-da.",
      "movie": "ANNIE HALL (1977)"
    },
    {
      "quote": "A boy's best friend is his mother.",
      "movie": "PSYCHO (1960)"
    },
    {
      "quote": "Greed, for lack of a better word, is good.",
      "movie": "WALL STREET (1987)"
    },
    {
      "quote": "Keep your friends close, but your enemies closer.",
      "movie": "THE GODFATHER PART II (1974)"
    },
    {
      "quote": "As God is my witness, I'll never be hungry again.",
      "movie": "GONE WITH THE WIND (1940)"
    },
    {
      "quote": "Well, here's another nice mess you've gotten me into!",
      "movie": "SONS OF THE DESERT (1933)"
    },
    {
      "quote": "Say \"hello\" to my little friend!",
      "movie": "SCARFACE (1983)"
    },
    {
      "quote": "What a dump.",
      "movie": "BEYOND THE FOREST (1949)"
    },
    {
      "quote": "Mrs. Robinson, you're trying to seduce me. Aren't you?",
      "movie": "THE GRADUATE (1967)"
    },
    {
      "quote": "Gentlemen, you can't fight in here! This is the War Room!",
      "movie": "DR. STRANGELOVE OR: HOW I LEARNED TO STOP WORRYING AND LOVE THE BOMB (1964)"
    },
    {
      "quote": "Elementary, my dear Watson.",
      "movie": "THE ADVENTURES OF SHERLOCK HOLMES (1939)"
    },
    {
      "quote": "Take your stinking paws off me, you damned dirty ape.",
      "movie": "PLANET OF THE APES (1968)"
    },
    {
      "quote": "Of all the gin joints in all the towns in all the world, she walks into mine.",
      "movie": "CASABLANCA (1943)"
    },
    {
      "quote": "Here's Johnny!",
      "movie": "THE SHINING (1980)"
    },
    {
      "quote": "They're here!",
      "movie": "POLTERGEIST (1982)"
    },
    {
      "quote": "Is it safe?",
      "movie": "MARATHON MAN (1976)"
    },
    {
      "quote": "Wait a minute, wait a minute. You ain't heard nothin' yet!",
      "movie": "THE JAZZ SINGER (1928)"
    },
    {
      "quote": "No wire hangers, ever!",
      "movie": "MOMMIE DEAREST (1981)"
    },
    {
      "quote": "Mother of mercy, is this the end of Rico?",
      "movie": "LITTLE CAESAR (1931)"
    },
    {
      "quote": "Forget it, Jake, it's Chinatown.",
      "movie": "CHINATOWN (1974)"
    },
    {
      "quote": "I have always depended on the kindness of strangers.",
      "movie": "A STREETCAR NAMED DESIRE (1952)"
    },
    {
      "quote": "Hasta la vista, baby.",
      "movie": "TERMINATOR 2: JUDGMENT DAY (1991)"
    },
    {
      "quote": "Soylent Green is people!",
      "movie": "SOYLENT GREEN (1973)"
    },
    {
      "quote": "Open the pod bay doors, please, HAL.",
      "movie": "2001: A SPACE ODYSSEY (1968)"
    },
    {
      "quote": "Striker: Surely you can't be serious.",
      "movie": "AIRPLANE! (1980)"
    },
    {
      "quote": "Yo, Adrian!",
      "movie": "ROCKY (1976)"
    },
    {
      "quote": "Hello, gorgeous.",
      "movie": "FUNNY GIRL (1968)"
    },
    {
      "quote": "Toga! Toga!",
      "movie": "NATIONAL LAMPOON'S ANIMAL HOUSE (1978)"
    },
    {
      "quote": "Listen to them. Children of the night. What music they make.",
      "movie": "DRACULA (1931)"
    },
    {
      "quote": "Oh, no, it wasn't the airplanes. It was Beauty killed the Beast.",
      "movie": "KING KONG (1933)"
    },
    {
      "quote": "My precious.",
      "movie": "THE LORD OF THE RINGS: THE TWO TOWERS (2002)"
    },
    {
      "quote": "Attica! Attica!",
      "movie": "DOG DAY AFTERNOON (1975)"
    },
    {
      "quote": "Sawyer, you're going out a youngster, but you've to come back a star!",
      "movie": "42ND STREET (1933)"
    },
    {
      "quote": "Listen to me, mister. You're my knight in shining armor. Don't you forget it. You're going to get back on that horse, and I'm going to be right behind you, holding on tight, and away we're gonna go, go!",
      "movie": "ON GOLDEN POND (1981)"
    },
    {
      "quote": "Tell 'em to go out there with all they got and win just one for the Gipper.",
      "movie": "KNUTE ROCKNE--ALL AMERICAN (1940)"
    },
    {
      "quote": "A martini. Shaken, not stirred.",
      "movie": "GOLDFINGER (1964)"
    },
    {
      "quote": "Who's on first.",
      "movie": "THE NAUGHTY NINETIES (1945)"
    },
    {
      "quote": "Cinderella story. Outta nowhere. A former greenskeeper, now, about to become the Masters champion. It looks like a mirac...It's in the hole! It's in the hole! It's in the hole!",
      "movie": "CADDYSHACK (1980)"
    },
    {
      "quote": "Life is a banquet, and most poor suckers are starving to death!",
      "movie": "AUNTIE MAME (1958)"
    },
    {
      "quote": "I feel the need - the need for speed!",
      "movie": "TOP GUN (1986)"
    },
    {
      "quote": "Carpe diem. Seize the day, boys. Make your lives extraordinary.",
      "movie": "DEAD POETS SOCIETY (1989)"
    },
    {
      "quote": "Snap out of it!",
      "movie": "MOONSTRUCK (1987)"
    },
    {
      "quote": "My mother thanks you. My father thanks you. My sister thanks you. And I thank you.",
      "movie": "YANKEE DOODLE DANDY (1943)"
    },
    {
      "quote": "Nobody puts Baby in a corner.",
      "movie": "DIRTY DANCING (1987)"
    },
    {
      "quote": "I'll get you, my pretty, and your little dog, too!",
      "movie": "THE WIZARD OF OZ (1939)"
    },
    {
      "quote": "I'm the king of the world!",
      "movie": "TITANIC (1997)"
    }
];

for(let i = 0; i < quotes.length; i++) {
  if (quotes[i].movie ===  "DR. STRANGELOVE OR: HOW I LEARNED TO STOP WORRYING AND LOVE THE BOMB (1964)") console.log(i)
}

let randomIndex = -1;
let shownQuotes = [];


$(document).ready(function() {
  console.assert(quotes.length === 100, "there are not a hundred quotes");

  showNewQuote();

  $("#new-quote").on("click", function() {
    removeQuote();
  })

});


function removeQuote() {
  $("#text, #author").fadeOut("slow", showNewQuote);
}

function showNewQuote() {
  randomIndex = returnNewRandomQuoteIndex();
  console.assert(randomIndex >= 0 && randomIndex <= 100, "random index not in range");

  let randomQuote = quotes[randomIndex];
  console.assert(typeof randomQuote.quote === "string", "movie quote is not a string");
  console.assert(typeof randomQuote.movie === "string", "movie name is not a string");

  let fontSize = `${calculateFontSize(randomQuote.quote.length)}em`;
  $("#text").css("fontSize", fontSize);
  $("#text").text(randomQuote.quote);
  $("#author").text("- " + randomQuote.movie);

  $("#tweet-quote").attr("href", convertStringToTwitterLink(randomQuote.quote + " -" + randomQuote.movie));

  $("#text").fadeIn("slow");
  $("#author").fadeIn("slow");
}

function convertStringToTwitterLink(string) {
  return "https://twitter.com/intent/tweet?text=" + encodeURIComponent(string);
}

function returnNewRandomQuoteIndex() {
  if (shownQuotes.length = 100) shownQuotes = [];
  let random;
  do {
    random = Math.floor(Math.random() * 100);
  } while (shownQuotes.indexOf(random) !== -1);
  shownQuotes.push(random);
  return random;
}

function calculateFontSize(length) {
  if (length < 25) {
      return 3.5;
  } else if (length < 50) {
      return 3.25;
  } else if (length < 75) {
      return 3;
  } else if (length < 100) {
      return 2.65;
  } else { 
      return 2;
  }
}
