/* XMRig
 * Copyright (c) 2021-2022 picasy       <https://github.com/picasy/xmrig>, <https://xmrigminer.blogspot.com/>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef XMRIG_DONATE_H
#define XMRIG_DONATE_H


/*
 * Dev donation.
 *
 * Percentage of your hashing power that you want to donate to the developer, can be 0 if you don't want to do that.
 *
 * Example of how it works for the setting of 0.5%:
 * You miner will mine into your usual pool for random time (in range from 49.5 to 148.5 minutes),
 * then switch to the developer's pool for 30 seconds, then switch again to your pool for 99 minutes & 30 seconds
 * and then switch again to developer's pool for 30 seconds, these rounds will continue until miner working.
 *
 * Randomised only first round, to prevent waves on the donation pool.
 *
 * Switching is instant, and only happens after a successful connection, so you never loose any hashes.
 *
 * If you plan on changing this setting to 0 please consider making a one off donation to my wallet:
 * XMR: 46H6AAyapyEXNTbwc11jEo6dDreyf6M31FCmUTTWjUCwXfrUmWkM7Nk2HbDZ6f7icW6z8H5SZ2YHG5jNm7tb6yRMPo5RLzV
 */
constexpr const int kDefaultDonateLevel = 0.5;
constexpr const int kMinimumDonateLevel = 0.5;


#endif /* XMRIG_DONATE_H */
