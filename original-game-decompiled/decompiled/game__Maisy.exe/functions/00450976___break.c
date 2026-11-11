
/* ==== __break @ 00450976 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450976-00450976
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


