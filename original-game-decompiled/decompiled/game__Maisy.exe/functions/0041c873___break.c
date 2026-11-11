
/* ==== __break @ 0041c873 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041c873-0041c873
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


