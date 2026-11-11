
/* ==== __break @ 0047348b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0047348b-0047348b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


