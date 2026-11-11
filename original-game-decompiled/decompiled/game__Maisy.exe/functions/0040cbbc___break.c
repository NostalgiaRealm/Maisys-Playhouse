
/* ==== __break @ 0040cbbc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040cbbc-0040cbbc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


