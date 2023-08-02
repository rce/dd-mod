function HeroStats(drop)
	return drop["HeroHealth"] + drop["HeroSpeed"] + drop["HeroDamage"] + drop["HeroCastingRate"] + drop["Ability1"] + drop["Ability2"]
end

function TowerStats(drop)
	return drop["TowerHealth"] + drop["TowerSpeed"] + drop["TowerDamage"] + drop["TowerArea"]
end

function MaxStat(drop)
	return math.max(
		drop["HeroHealth"], drop["HeroSpeed"], drop["HeroDamage"], drop["HeroCastingRate"],
		drop["Ability1"], drop["Ability2"],
		drop["TowerHealth"], drop["TowerSpeed"], drop["TowerDamage"], drop["TowerArea"]
	)
end

function TotalStats(drop)
	return HeroStats(drop) + TowerStats(drop)
end

function ShouldLoot(drop, current, current2)
	print(drop, current, current2)

	if drop["Type"] == "weapon" then
		return false
	end

	-- drop["Upgrades"]

	if current ~= nil and owerStats(drop) > TowerStats(current) then
		return true
	end
	if current2 ~= nil and owerStats(drop) > TowerStats(current2) then
		return true
	end

	return TowerStats(drop) > 800 or TotalStats(drop) > 2000
end
