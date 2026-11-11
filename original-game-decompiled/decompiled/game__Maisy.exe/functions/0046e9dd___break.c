
/* ==== __break @ 0046e9dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046e9dd-0046e9dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


