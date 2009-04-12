# sudo ./instrument/marshal.d -c "./ruby instrument/marshal.rb" 

Marshal.load( Marshal.dump( { 1 => :one, 2 => :two } ) )