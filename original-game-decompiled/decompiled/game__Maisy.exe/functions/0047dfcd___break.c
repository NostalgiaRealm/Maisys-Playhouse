
/* ==== __break @ 0047dfcd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dfcd-0047dfcd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


