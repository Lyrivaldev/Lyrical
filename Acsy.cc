-- List of whitelisted player names
local whitelist = {
["Anthonyz_ohhhhh8"] = true,
["1youlookgoodtoday"]= true,
["TheKings_Tower"]= true,
["SaitamaDgold"]= true,
["mustafa98910"]= true,
["ezwingood"]= true,
["XSkullAQ_Q9"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
["user"]= true,
}

-- Function to check if a player is whitelisted
local function isWhitelisted(player)
    return whitelist[player.Name] == true
end

-- Function to handle player joining
game.Players.PlayerAdded:Connect(function(player)
    if not isWhitelisted(player) then
        player:Kick("You are not whitelisted please buy the script!")
    else
        print(player.Name .. " has joined the game.")
        -- Activate loadstring for whitelisted players
    end
end)

-- Check existing players
for _, player in ipairs(game.Players:GetPlayers()) do
    if not isWhitelisted(player) then
        player:Kick("You are not whitelisted please buy the script!")
    else
        -- Activate loadstring for  players
    loadstring(game:HttpGet("https://raw.githubusercontent.com/Ianasmite/Pogisimark/main/A"))()
    end
end
