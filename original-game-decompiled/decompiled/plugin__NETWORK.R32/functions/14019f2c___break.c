
/* ==== __break @ 14019f2c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2c-14019f2c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


