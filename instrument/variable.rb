# sudo ./instrument/variable.d -c "./ruby instrument/variable.rb" 

$global_var = :global_var
$global_var

class Something
  @@else = :else

  class << self
    
    def else
      @@else
    end
    
  end

  def initialize
    @to_s = 'Something else'
  end

  def to_s
    @to_s
  end

end

Something.new().to_s