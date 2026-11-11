
/* ==== __break @ 00489936 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489936-00489936
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


