
/* ==== __break @ 1401f61d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61d-1401f61d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


