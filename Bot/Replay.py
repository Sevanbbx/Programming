import time
import discord
import random
            
client = discord.Client()

@client.event
async def on_message(message):        
    if(message.content != "YEAH"):
        message.content = message.content.lower()
    # we do not want the bot to reply to itself
    if message.author == client.user:
        return


    '''arr = message.raw_role_mentions
    for i in range(len(arr)):
        #print(arr[i])
        msg = arr[i].format(message)
        await client.send_message(message.channel, msg)'''
        
    if message.content.startswith('!hello'):
        msg = 'Hello {0.author.mention}'.format(message)
        await client.send_message(message.channel, msg)
        
    if message.content.startswith('!slykku'):
        ip = request.connection.remoteAddress
        msg = 'Hello MISTER <ip>'.format(message)
        await client.send_message(message.channel, msg)        
    
    
    if message.content.startswith('!flipacoin'):
        num = random.randint(1,2)
        if(num == 1):
            msg = '{0.author.mention} Tails'.format(message)
        if(num == 2):
            msg = '{0.author.mention} Heads'.format(message)
        await client.send_message(message.channel, msg)    
    
    if message.content.startswith('!dude'):
        msg = 'Hello MISTER <@228921143694852098>'.format(message)
        await client.send_message(message.channel, msg)    
        
    if (message.content.startswith('!timer') and len(message.content) == 9 and "<@&513747383683645460>"):
        seconds = int(message.content[7]) * 10 + int(message.content[8])
        '''msg = "```\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t RIP Programmer Sevan(20.11.2018-21.11.2018)```".format(message)
        await client.send_message(message.channel, msg)   '''      
        msg = "```\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTimer Started```".format(message)
        await client.send_message(message.channel, msg)         
        for i in range(seconds):
            if((seconds - i) == seconds / 2):
                msg = "```\t\t\t\t\t\t\t\t\t\t\t\t\t\t\thalf of your time passed```".format(message)
                await client.send_message(message.channel, msg)                
            if((seconds - i) == 10):
                msg = "```\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t10 seconds left```".format(message)
                await client.send_message(message.channel, msg)                            
            time.sleep(1)  
            '''if message.content.startswith('!timerstop'):
                msg = "```\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTimer Stopped```".format(message)
                await client.send_message(message.channel, msg)                                            
                break        '''
        msg = "```\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTime's up!```".format(message)
        await client.send_message(message.channel, msg)       
        
    if message.content.startswith('esh'):
        msg = 'Esh'.format(message)
        await client.send_message(message.channel, msg)
    
    if ((message.content.startswith('YEAH') and len(message.content) == 4)):
        msg = 'BOIIII'.format(message)
        await client.send_message(message.channel, msg)  
            
        
    if ((message.content.startswith('!help') and len(message.content) == 5)):
        msg = " {0.author.mention} is asking for a help ``` \n 1. !Hello - Bot greets you \n 2. !dude - Bot greets his creator \n 3. !Timer - Timer, which does not work  \n 4. !Flipacoin - Flipping a coin \n 5. Esh - just ESH \n 6. YEAH - BOIIII```".format(message)
        await client.send_message(message.channel, msg)    

@client.event
async def on_ready():
    print('Logged in as')
    print(client.user.name)
    print(client.user.id)
    print('------')

client.run('NDc3MTE5NzIxNzYyNzE3NzA2.Dk359w.Lan62rnWf-vHpCz8rc0-822UiSM')