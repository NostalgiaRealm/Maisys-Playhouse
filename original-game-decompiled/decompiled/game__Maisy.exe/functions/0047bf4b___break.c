
/* ==== __break @ 0047bf4b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047bf4b-0047bf4b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


