
/* ==== __break @ 0047907b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047907b-0047907b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


