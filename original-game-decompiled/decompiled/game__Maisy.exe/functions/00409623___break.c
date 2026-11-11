
/* ==== __break @ 00409623 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409623-00409623
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


