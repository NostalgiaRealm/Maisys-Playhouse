
/* ==== __break @ 0041be48 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be48-0041be48
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


