
/* ==== __break @ 0047a05b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047a05b-0047a05b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


