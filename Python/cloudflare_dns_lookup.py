from pprint import pprint 

def CloudFlareLookup(type,record):
        import requests, json
        headers = {'accept': 'application/dns-json'}
        url = "https://1.1.1.1/dns-query?name=%s&type=%s" % (record,type)
        r = requests.get(url, headers=headers)
        j_data = json.loads(r.text)
        try:
                return(j_data['Answer'])
        except:
                return(j_data['Question'])


# Examples
# Get A record for google.com
data = CloudFlareLookup('a','google.com')
pprint(data)

# Get MX record for gmail.com
data = CloudFlareLookup('mx','gmail.com')
pprint(data)

# Get TXT records for gmail.com, useful for SPF lookups
data = CloudFlareLookup('txt','gmail.com')
pprint(data)

