
/* ==== __break @ 0049f3dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f3dd-0049f3dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


