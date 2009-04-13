# sudo ./instrument/compile_and_lex.d -c "./ruby instrument/compile_and_lex.rb" 

module A
  
  def to_s
    super + "A"
  end
  
end

class B
  
  def to_s
    "B"
  end
  
end

class C < B
  include A

  def to_s
    super + "C"
  end

  public :to_s

end

b = B.new
b.extend A