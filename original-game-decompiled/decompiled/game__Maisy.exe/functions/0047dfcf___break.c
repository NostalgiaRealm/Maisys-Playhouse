
/* ==== __break @ 0047dfcf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047dfcf-0047dfcf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


