function findMario(URL, superMario) {
    var newRequest = new XMLHttpRequest();
    newRequest.onreadystatechange = function() {
      if (newRequest.readyState === 4) {
        if (newRequest.status === 200) {
          var result = JSON.parse(newRequest.responseText);
          if (superMario) {
            superMario(result);
          }
        }
      }
    };
    newRequest.open('GET', URL);
    newRequest.send();
  }
  
  findMario('https://cors-anywhere.herokuapp.com/http://www.amiiboapi.com/api/amiibo/?name=mario', function(result) {
    console.log(result);
  });