
/* ==== __break @ 14020a4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4a-14020a4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


