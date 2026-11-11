
/* ==== __break @ 1401f61f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61f-1401f61f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


