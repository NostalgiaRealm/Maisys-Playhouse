
/* ==== __break @ 1402064c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064c-1402064c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


