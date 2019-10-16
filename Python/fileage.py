def fileAge(fn):
        import os.path, time
        now = int(time.time())
        fn_time = int(os.path.getmtime(fn))
        age = now - fn_time
        return age


## Desc: get fileage of a file
## Use: Download a file if older the X seconds

## example
print(fileAge('/tmp/xxx'))
