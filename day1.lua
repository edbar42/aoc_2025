local dial = 50
local passwd = 0
local f = io.open("input.txt", "r")
if f == nil then
	print("could not read input.txt")
	return
end

for l in f:lines() do
	local turn_str, many = l:match("^([ LR ])(%d+)")
	if turn_str == "L" then
		dial = dial - many
	elseif turn_str == "R" then
		dial = dial + many
	end
	if dial % 100 == 0 then
		passwd = passwd + 1
	end
end

print(passwd)

f.close(f)
