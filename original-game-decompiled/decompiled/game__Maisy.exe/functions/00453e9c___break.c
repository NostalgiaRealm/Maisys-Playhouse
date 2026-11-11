
/* ==== __break @ 00453e9c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00453e9c-00453e9c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


