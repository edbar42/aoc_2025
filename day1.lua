function read_solution_file()
	local f = io.open("input.txt", "rb")
	if f == nil then
		print("could not read input.txt")
		return
	end

	for l in f:lines() do
		print(l)
	end

	f.close(f)
end

-- local start = 50
data = read_solution_file()
