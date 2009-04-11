# sudo ./instrument/thread_switch.d -c "./ruby instrument/thread_switch.rb" 

threads = []
100.times do
  threads << Thread.new{}
end
10.times do
  threads << Thread.new{ sleep(1) }
end
100.times do
  threads << Thread.new{ Thread.pass }
end

threads.each{|t| t.join }