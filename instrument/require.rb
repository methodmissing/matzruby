# sudo ./instrument/require.d -c "./ruby instrument/require.rb" 

%w(set erb observer).each do |f|
  require File.join( File.dirname(__FILE__), '..', 'lib', f )
end  