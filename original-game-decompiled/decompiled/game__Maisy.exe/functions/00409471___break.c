
/* ==== __break @ 00409471 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409471-00409471
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


